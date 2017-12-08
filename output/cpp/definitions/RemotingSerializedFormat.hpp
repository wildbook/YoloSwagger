#pragma once
#include <json.hpp>
namespace leagueapi {
  // Serialization format for remoting requests and results.
  enum class RemotingSerializedFormat_t {
    YAML_E = 2,
    JSON_E = 1,
    MsgPack_E = 3,
  };

  inline void to_json(nlohmann::json& j, const RemotingSerializedFormat_t& v) {
    switch(v) {
      case RemotingSerializedFormat_t::YAML_E:
        j = "YAML";
      break;
      case RemotingSerializedFormat_t::JSON_E:
        j = "JSON";
      break;
      case RemotingSerializedFormat_t::MsgPack_E:
        j = "MsgPack";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RemotingSerializedFormat_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "YAML"){
      v = RemotingSerializedFormat_t::YAML_E;
      return;
    }
    if(s == "JSON"){
      v = RemotingSerializedFormat_t::JSON_E;
      return;
    }
    if(s == "MsgPack"){
      v = RemotingSerializedFormat_t::MsgPack_E;
      return;
    }
  }
  inline std::string to_string(const RemotingSerializedFormat_t& v) {
    switch(v) {
      case RemotingSerializedFormat_t::YAML_E:
        return "YAML";
      case RemotingSerializedFormat_t::JSON_E:
        return "JSON";
      case RemotingSerializedFormat_t::MsgPack_E:
        return "MsgPack";
    }
  }

}
