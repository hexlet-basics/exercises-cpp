FROM hexletbasics/base-image:latest

RUN apt-get update -y && apt-get install g++ python3-pip -y
RUN pip install cpplint
RUN curl -sO https://raw.githubusercontent.com/doctest/doctest/master/doctest/doctest.h --output-dir /usr/local/include

ENV CPLUS_INCLUDE_PATH=/opt

WORKDIR /exercises-cpp

COPY . .

ENV PATH=~/.local/bin/:/exercises-cpp/bin:$PATH
