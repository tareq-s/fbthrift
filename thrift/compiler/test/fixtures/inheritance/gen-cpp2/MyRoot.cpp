/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "MyRoot.h"

#include "MyRoot.tcc"

#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

std::unique_ptr<apache::thrift::AsyncProcessor> MyRootSvIf::getProcessor() {
  return folly::make_unique<MyRootAsyncProcessor>(this);
}

void MyRootSvIf::do_root() {
  throw apache::thrift::TApplicationException("Function do_root is unimplemented");
}

folly::Future<folly::Unit> MyRootSvIf::future_do_root() {
  return apache::thrift::detail::si::future([&] { return do_root(); });
}

void MyRootSvIf::async_tm_do_root(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_do_root(); });
}

void MyRootSvNull::do_root() {}

const char* MyRootAsyncProcessor::getServiceName() {
  return "MyRoot";
}

folly::Optional<std::string> MyRootAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  std::string fname;
  apache::thrift::MessageType mtype;
  int32_t protoSeqId = 0;
  std::string pname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;
  try {
    switch(protType) {
      case apache::thrift::protocol::T_BINARY_PROTOCOL:
      {
        std::unique_ptr<apache::thrift::BinaryProtocolReader> iprot(new apache::thrift::BinaryProtocolReader());
        iprot->setInput(buf);
        iprot->readMessageBegin(fname, mtype, protoSeqId);
        auto pfn = cacheKeyMap_.find(fname);
        if (pfn == cacheKeyMap_.end()) {
          return folly::none;
        }
        auto cacheKeyParamId = pfn->second;
        uint32_t xfer = 0;
        xfer += iprot->readStructBegin(pname);
        while(true) {
          xfer += iprot->readFieldBegin(pname, ftype, fid);
          if (ftype == apache::thrift::protocol::T_STOP) {
            break;
          }
          if (fid == cacheKeyParamId) {
            std::string cacheKey;
            iprot->readString(cacheKey);
            return folly::Optional<std::string>(std::move(cacheKey));
          }
          xfer += iprot->skip(ftype);
          xfer += iprot->readFieldEnd();
        }
        return folly::none;
      }
      case apache::thrift::protocol::T_COMPACT_PROTOCOL:
      {
        std::unique_ptr<apache::thrift::CompactProtocolReader> iprot(new apache::thrift::CompactProtocolReader());
        iprot->setInput(buf);
        iprot->readMessageBegin(fname, mtype, protoSeqId);
        auto pfn = cacheKeyMap_.find(fname);
        if (pfn == cacheKeyMap_.end()) {
          return folly::none;
        }
        auto cacheKeyParamId = pfn->second;
        uint32_t xfer = 0;
        xfer += iprot->readStructBegin(pname);
        while(true) {
          xfer += iprot->readFieldBegin(pname, ftype, fid);
          if (ftype == apache::thrift::protocol::T_STOP) {
            break;
          }
          if (fid == cacheKeyParamId) {
            std::string cacheKey;
            iprot->readString(cacheKey);
            return folly::Optional<std::string>(std::move(cacheKey));
          }
          xfer += iprot->skip(ftype);
          xfer += iprot->readFieldEnd();
        }
        return folly::none;
      }
      default:
      {
        return folly::none;
        break;
      }
    }
  } catch(const std::exception& e) {
    LOG(ERROR) << "Caught an exception parsing buffer:" << e.what();
    return folly::none;
  }
  return folly::none;
}

void MyRootAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  std::string fname;
  apache::thrift::MessageType mtype;
  int32_t protoSeqId = 0;
  switch(protType) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      std::unique_ptr<apache::thrift::BinaryProtocolReader> iprot(new apache::thrift::BinaryProtocolReader());
      iprot->setInput(buf.get());
      try {
        iprot->readMessageBegin(fname, mtype, protoSeqId);
      } catch(const apache::thrift::TException& ex) {
        LOG(ERROR) << "received invalid message from client: " << ex.what();
        apache::thrift::BinaryProtocolWriter prot;
        if (req) {
          LOG(ERROR) << "invalid message from client" << " in function process";
          apache::thrift::TApplicationException x("invalid message from client");
          folly::IOBufQueue queue = serializeException("process", &prot, protoSeqId, nullptr, x);
          queue.append(apache::thrift::transport::THeader::transform(queue.move(), context->getTransforms(), context->getMinCompressBytes()));
          auto queue_mw = folly::makeMoveWrapper(std::move(queue));
          auto req_mw = folly::makeMoveWrapper(std::move(req));
          eb->runInEventBaseThread([=]() mutable {
            (*req_mw)->sendReply(queue_mw->move());
          }
          );
          return;
        }
        else {
          LOG(ERROR) << "invalid message from client" << " in oneway function process";
        }
        return;
      }
      if (mtype != apache::thrift::T_CALL && mtype != apache::thrift::T_ONEWAY) {
        LOG(ERROR) << "received invalid message of type " << mtype;
        apache::thrift::BinaryProtocolWriter prot;
        if (req) {
          LOG(ERROR) << "invalid message arguments" << " in function process";
          apache::thrift::TApplicationException x("invalid message arguments");
          folly::IOBufQueue queue = serializeException("process", &prot, protoSeqId, nullptr, x);
          queue.append(apache::thrift::transport::THeader::transform(queue.move(), context->getTransforms(), context->getMinCompressBytes()));
          auto queue_mw = folly::makeMoveWrapper(std::move(queue));
          auto req_mw = folly::makeMoveWrapper(std::move(req));
          eb->runInEventBaseThread([=]() mutable {
            (*req_mw)->sendReply(queue_mw->move());
          }
          );
          return;
        }
        else {
          LOG(ERROR) << "invalid message arguments" << " in oneway function process";
        }
      }
      auto pfn = binaryProcessMap_.find(fname);
      if (pfn == binaryProcessMap_.end()) {
        const std::string exMsg = folly::stringPrintf( "Method name %s not found", fname.c_str());
        apache::thrift::BinaryProtocolWriter prot;
        if (req) {
          LOG(ERROR) << exMsg << " in function process";
          apache::thrift::TApplicationException x(exMsg);
          folly::IOBufQueue queue = serializeException("process", &prot, protoSeqId, nullptr, x);
          queue.append(apache::thrift::transport::THeader::transform(queue.move(), context->getTransforms(), context->getMinCompressBytes()));
          auto queue_mw = folly::makeMoveWrapper(std::move(queue));
          auto req_mw = folly::makeMoveWrapper(std::move(req));
          eb->runInEventBaseThread([=]() mutable {
            (*req_mw)->sendReply(queue_mw->move());
          }
          );
          return;
        }
        else {
          LOG(ERROR) << exMsg << " in oneway function process";
        }
        return;
      }
      (this->*(pfn->second))(std::move(req), std::move(buf), std::move(iprot), context, eb, tm);
      return;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      std::unique_ptr<apache::thrift::CompactProtocolReader> iprot(new apache::thrift::CompactProtocolReader());
      iprot->setInput(buf.get());
      try {
        iprot->readMessageBegin(fname, mtype, protoSeqId);
      } catch(const apache::thrift::TException& ex) {
        LOG(ERROR) << "received invalid message from client: " << ex.what();
        apache::thrift::CompactProtocolWriter prot;
        if (req) {
          LOG(ERROR) << "invalid message from client" << " in function process";
          apache::thrift::TApplicationException x("invalid message from client");
          folly::IOBufQueue queue = serializeException("process", &prot, protoSeqId, nullptr, x);
          queue.append(apache::thrift::transport::THeader::transform(queue.move(), context->getTransforms(), context->getMinCompressBytes()));
          auto queue_mw = folly::makeMoveWrapper(std::move(queue));
          auto req_mw = folly::makeMoveWrapper(std::move(req));
          eb->runInEventBaseThread([=]() mutable {
            (*req_mw)->sendReply(queue_mw->move());
          }
          );
          return;
        }
        else {
          LOG(ERROR) << "invalid message from client" << " in oneway function process";
        }
        return;
      }
      if (mtype != apache::thrift::T_CALL && mtype != apache::thrift::T_ONEWAY) {
        LOG(ERROR) << "received invalid message of type " << mtype;
        apache::thrift::CompactProtocolWriter prot;
        if (req) {
          LOG(ERROR) << "invalid message arguments" << " in function process";
          apache::thrift::TApplicationException x("invalid message arguments");
          folly::IOBufQueue queue = serializeException("process", &prot, protoSeqId, nullptr, x);
          queue.append(apache::thrift::transport::THeader::transform(queue.move(), context->getTransforms(), context->getMinCompressBytes()));
          auto queue_mw = folly::makeMoveWrapper(std::move(queue));
          auto req_mw = folly::makeMoveWrapper(std::move(req));
          eb->runInEventBaseThread([=]() mutable {
            (*req_mw)->sendReply(queue_mw->move());
          }
          );
          return;
        }
        else {
          LOG(ERROR) << "invalid message arguments" << " in oneway function process";
        }
      }
      auto pfn = compactProcessMap_.find(fname);
      if (pfn == compactProcessMap_.end()) {
        const std::string exMsg = folly::stringPrintf( "Method name %s not found", fname.c_str());
        apache::thrift::CompactProtocolWriter prot;
        if (req) {
          LOG(ERROR) << exMsg << " in function process";
          apache::thrift::TApplicationException x(exMsg);
          folly::IOBufQueue queue = serializeException("process", &prot, protoSeqId, nullptr, x);
          queue.append(apache::thrift::transport::THeader::transform(queue.move(), context->getTransforms(), context->getMinCompressBytes()));
          auto queue_mw = folly::makeMoveWrapper(std::move(queue));
          auto req_mw = folly::makeMoveWrapper(std::move(req));
          eb->runInEventBaseThread([=]() mutable {
            (*req_mw)->sendReply(queue_mw->move());
          }
          );
          return;
        }
        else {
          LOG(ERROR) << exMsg << " in oneway function process";
        }
        return;
      }
      (this->*(pfn->second))(std::move(req), std::move(buf), std::move(iprot), context, eb, tm);
      return;
    }
    default:
    {
      LOG(ERROR) << "invalid protType: " << protType;
      return;
      break;
    }
  }
}

bool MyRootAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  std::string fname;
  apache::thrift::MessageType mtype;
  int32_t protoSeqId = 0;
  apache::thrift::protocol::PROTOCOL_TYPES protType = static_cast<apache::thrift::protocol::PROTOCOL_TYPES>(header->getProtocolId());
  switch(protType) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader iprot;
      iprot.setInput(buf);
      try {
        iprot.readMessageBegin(fname, mtype, protoSeqId);
        auto it = onewayMethods_.find(fname);
        return it != onewayMethods_.end();
      } catch(const apache::thrift::TException& ex) {
        LOG(ERROR) << "received invalid message from client: " << ex.what();
        return false;
      }
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader iprot;
      iprot.setInput(buf);
      try {
        iprot.readMessageBegin(fname, mtype, protoSeqId);
        auto it = onewayMethods_.find(fname);
        return it != onewayMethods_.end();
      } catch(const apache::thrift::TException& ex) {
        LOG(ERROR) << "received invalid message from client: " << ex.what();
        return false;
      }
    }
    default:
    {
      LOG(ERROR) << "invalid protType: " << protType;
      break;
    }
  }
  return false;
}

std::unordered_set<std::string> MyRootAsyncProcessor::onewayMethods_ {};
std::unordered_map<std::string, int16_t> MyRootAsyncProcessor::cacheKeyMap_ {};
MyRootAsyncProcessor::BinaryProtocolProcessMap MyRootAsyncProcessor::binaryProcessMap_ {
  {"do_root", &MyRootAsyncProcessor::_processInThread_do_root<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}
};
MyRootAsyncProcessor::CompactProtocolProcessMap MyRootAsyncProcessor::compactProcessMap_ {
  {"do_root", &MyRootAsyncProcessor::_processInThread_do_root<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>}
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift