#ifndef SWAGGER_TYPES_LolSummonerRMSMessage_HPP
#define SWAGGER_TYPES_LolSummonerRMSMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSummonerRMSMessage {
    // 
    int64_t timestamp;
    // 
    std::string payload;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRMSMessage& v) {
    j["timestamp"] = v.timestamp;
    j["payload"] = v.payload;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRMSMessage& v) {
    v.timestamp = j.at("timestamp").get<int64_t>;
    v.payload = j.at("payload").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerRMSMessage_HPP
