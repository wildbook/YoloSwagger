#ifndef SWAGGER_TYPES_RemotingSerializedFormat_HPP
#define SWAGGER_TYPES_RemotingSerializedFormat_HPP
#include <json.hpp>
namespace leagueapi {
  // Serialization format for remoting requests and results.
  enum class RemotingSerializedFormat {
    // 
    JSON = 1,
    // 
    MsgPack = 3,
    // 
    YAML = 2,
  };

  inline void to_json(nlohmann::json& j, const RemotingSerializedFormat& v) {
    switch(v) {
      case RemotingSerializedFormat::JSON:
        j = "JSON";
      break;
      case RemotingSerializedFormat::MsgPack:
        j = "MsgPack";
      break;
      case RemotingSerializedFormat::YAML:
        j = "YAML";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RemotingSerializedFormat& v) {
    const auto& s = j.get<std::string>();
    if(s == "JSON"){
      v = RemotingSerializedFormat::JSON;
      return;
    }
    if(s == "MsgPack"){
      v = RemotingSerializedFormat::MsgPack;
      return;
    }
    if(s == "YAML"){
      v = RemotingSerializedFormat::YAML;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_RemotingSerializedFormat_HPP
