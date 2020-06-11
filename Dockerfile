FROM melodyn/base-image:latest

WORKDIR /exercises-cpp

COPY --from=melodyn/base-image:latest /tmp/basics/common/* ./
COPY . .
