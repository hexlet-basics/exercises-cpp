FROM hexletbasics/base-image:latest

RUN apt-get update -y && apt-get install g++ python3-pip -y
RUN pip install --break-system-package cpplint
RUN curl -sO https://raw.githubusercontent.com/doctest/doctest/master/doctest/doctest.h --output-dir /usr/local/include

ENV PATH=~/.local/bin/:/exercises-cpp/bin:$PATH

COPY include/test_helper.h /usr/local/include/test_helper.h
RUN cd /usr/local/include && g++ -std=c++17 -c test_helper.h

WORKDIR /exercises-cpp

COPY . .
