FROM hexletbasics/base-image:latest

RUN apt-get update && apt-get install g++ python3-pip
RUN pip install cpplint

ENV CPLUS_INCLUDE_PATH=/opt

WORKDIR /exercises-cpp

COPY . .

ENV PATH=~/.local/bin/:/exercises-cpp/bin:$PATH
