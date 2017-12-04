#ifndef SWAGGER_TYPES_LolSummonerRMSMessage_HPP
#define SWAGGER_TYPES_LolSummonerRMSMessage_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolSummonerRMSMessage {
'    // 
    std::string payload;
    // 
    int64_t timestamp;
  };

  void to_json(nlohmann::json& j, const LolSummonerRMSMessage& v) {
    j["payload"] = v.payload;
    j["timestamp"] = v.timestamp;
  }

  void from_json(const nlohmann::json& j, LolSummonerRMSMessage& v) {
    v.payload = j.at("payload").get<std::string>;
    v.timestamp = j.at("timestamp").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerRMSMessage_HPP
