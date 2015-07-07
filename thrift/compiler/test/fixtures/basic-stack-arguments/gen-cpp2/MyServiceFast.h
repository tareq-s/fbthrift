/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <folly/futures/Future.h>
#include "module_types.h"



namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyServiceFastSvAsyncIf {
 public:
  virtual ~MyServiceFastSvAsyncIf() {}
  virtual void async_eb_hasDataById(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, int64_t id) = 0;
  virtual void async_hasDataById(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, int64_t id) = delete;
  virtual folly::Future<bool> future_hasDataById(int64_t id) = 0;
  virtual void async_eb_getDataById(std::unique_ptr<apache::thrift::HandlerCallback<std::string>> callback, int64_t id) = 0;
  virtual void async_getDataById(std::unique_ptr<apache::thrift::HandlerCallback<std::string>> callback, int64_t id) = delete;
  virtual folly::Future<std::string> future_getDataById(int64_t id) = 0;
  virtual void async_eb_putDataById(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int64_t id, const std::string& data) = 0;
  virtual void async_putDataById(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int64_t id, const std::string& data) = delete;
  virtual folly::Future<folly::Unit> future_putDataById(int64_t id, const std::string& data) = 0;
  virtual void async_eb_lobDataById(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, int64_t id, const std::string& data) = 0;
  virtual void async_lobDataById(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, int64_t id, const std::string& data) = delete;
  virtual folly::Future<folly::Unit> future_lobDataById(int64_t id, const std::string& data) = 0;
};

class MyServiceFastAsyncProcessor;

class MyServiceFastSvIf : public MyServiceFastSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef MyServiceFastAsyncProcessor ProcessorType;

  virtual ~MyServiceFastSvIf() {}
  virtual std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor();
  virtual bool hasDataById(int64_t id);
  folly::Future<bool> future_hasDataById(int64_t id);
  virtual void async_eb_hasDataById(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, int64_t id);
  virtual void getDataById(std::string& _return, int64_t id);
  folly::Future<std::string> future_getDataById(int64_t id);
  virtual void async_eb_getDataById(std::unique_ptr<apache::thrift::HandlerCallback<std::string>> callback, int64_t id);
  virtual void putDataById(int64_t id, const std::string& data);
  folly::Future<folly::Unit> future_putDataById(int64_t id, const std::string& data);
  virtual void async_eb_putDataById(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int64_t id, const std::string& data);
  virtual void lobDataById(int64_t id, const std::string& data);
  folly::Future<folly::Unit> future_lobDataById(int64_t id, const std::string& data);
  virtual void async_eb_lobDataById(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, int64_t id, const std::string& data);
};

class MyServiceFastSvNull : public MyServiceFastSvIf {
 public:
  virtual ~MyServiceFastSvNull() {}
};

class MyServiceFastAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  virtual const char* getServiceName();
 protected:
  MyServiceFastSvIf* iface_;
  virtual folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType);
  virtual void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  virtual bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header);
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
  using BinaryProtocolProcessFunction = void(MyServiceFastAsyncProcessor::*)(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<apache::thrift::BinaryProtocolReader> iprot, apache::thrift::Cpp2RequestContext* context, apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  using BinaryProtocolProcessMap = std::unordered_map<std::string, BinaryProtocolProcessFunction>;
  static MyServiceFastAsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
  using CompactProtocolProcessFunction = void(MyServiceFastAsyncProcessor::*)(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<apache::thrift::CompactProtocolReader> iprot, apache::thrift::Cpp2RequestContext* context, apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  using CompactProtocolProcessMap = std::unordered_map<std::string, CompactProtocolProcessFunction>;
  static MyServiceFastAsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_hasDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_hasDataById(int32_t protoSeqId, apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_hasDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_hasDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_getDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_getDataById(int32_t protoSeqId, apache::thrift::ContextStack* ctx, std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_getDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_getDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_putDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_putDataById(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_putDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_putDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_lobDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
 public:
  MyServiceFastAsyncProcessor(MyServiceFastSvIf* iface) :
      iface_(iface) {}

  virtual ~MyServiceFastAsyncProcessor() {}
};

class MyServiceFastAsyncClient : public apache::thrift::TClientBase {
 public:
  virtual const char* getServiceName();
  typedef std::unique_ptr<apache::thrift::RequestChannel, apache::thrift::async::TDelayedDestruction::Destructor> channel_ptr;

  virtual ~MyServiceFastAsyncClient() {}

  MyServiceFastAsyncClient(std::shared_ptr<apache::thrift::RequestChannel> channel) :
      channel_(channel) {
    connectionContext_.reset(new apache::thrift::Cpp2ConnContext(nullptr, nullptr, channel_->getHeader(), nullptr, nullptr));
  }

  apache::thrift::RequestChannel*  getChannel() {
    return this->channel_.get();
  }
  virtual void hasDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
  virtual void hasDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
  virtual bool sync_hasDataById(int64_t id);
  virtual bool sync_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual folly::Future<bool> future_hasDataById(int64_t id);
  virtual folly::Future<bool> future_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual void hasDataById(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id);
  static folly::exception_wrapper recv_wrapped_hasDataById(bool& _return, ::apache::thrift::ClientReceiveState& state);
  static bool recv_hasDataById(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual bool recv_instance_hasDataById(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_hasDataById(bool& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void hasDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_hasDataByIdT(Protocol_* prot, bool& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static bool recv_hasDataByIdT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void getDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
  virtual void getDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
  virtual void sync_getDataById(std::string& _return, int64_t id);
  virtual void sync_getDataById(apache::thrift::RpcOptions& rpcOptions, std::string& _return, int64_t id);
  virtual folly::Future<std::string> future_getDataById(int64_t id);
  virtual folly::Future<std::string> future_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual void getDataById(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id);
  static folly::exception_wrapper recv_wrapped_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void getDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_getDataByIdT(Protocol_* prot, std::string& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_getDataByIdT(Protocol_* prot, std::string& _return, ::apache::thrift::ClientReceiveState& state);
  virtual void putDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data);
  virtual void putDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data);
  virtual void sync_putDataById(int64_t id, const std::string& data);
  virtual void sync_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data);
  virtual folly::Future<folly::Unit> future_putDataById(int64_t id, const std::string& data);
  virtual folly::Future<folly::Unit> future_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data);
  virtual void putDataById(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id, const std::string& data);
  static folly::exception_wrapper recv_wrapped_putDataById(::apache::thrift::ClientReceiveState& state);
  static void recv_putDataById(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_putDataById(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_putDataById(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void putDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_putDataByIdT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_putDataByIdT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void lobDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data);
  virtual void lobDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data);
  virtual void sync_lobDataById(int64_t id, const std::string& data);
  virtual void sync_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data);
  virtual folly::Future<folly::Unit> future_lobDataById(int64_t id, const std::string& data);
  virtual folly::Future<folly::Unit> future_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data);
  virtual void lobDataById(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id, const std::string& data);
  template <typename Protocol_>
  void lobDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data);
 protected:
  std::unique_ptr<apache::thrift::server::TConnectionContext>connectionContext_;
  std::shared_ptr<apache::thrift::RequestChannel> channel_;
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift