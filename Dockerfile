FROM hexletbasics/base-image:latest

ENV PATH=~/.local/bin/:/exercises-cpp/bin:$PATH
WORKDIR /exercises-cpp

RUN apt-get update -yqq && \
    apt-get install --no-install-recommends -yqq g++ python3-pip curl && \
    rm -rf /var/lib/apt/lists/*

RUN pip install --no-cache-dir --break-system-packages cpplint

RUN curl -sO https://raw.githubusercontent.com/doctest/doctest/master/doctest/doctest.h --output-dir /usr/local/include

COPY include/test_helper.h /usr/local/include/test_helper.h

RUN cd /usr/local/include && g++ -std=c++23 -c test_helper.h

COPY . .
