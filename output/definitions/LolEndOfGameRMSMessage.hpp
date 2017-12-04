#ifndef SWAGGER_TYPES_LolEndOfGameRMSMessage_HPP
#define SWAGGER_TYPES_LolEndOfGameRMSMessage_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolEndOfGameRMSMessage {
'    // 
    std::string payload;
    // 
    int64_t timestamp;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameRMSMessage& v) {
    j["payload"] = v.payload;
    j["timestamp"] = v.timestamp;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameRMSMessage& v) {
    v.payload = j.at("payload").get<std::string>;
    v.timestamp = j.at("timestamp").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameRMSMessage_HPP
