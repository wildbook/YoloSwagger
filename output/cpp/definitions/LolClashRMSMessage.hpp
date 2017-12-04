#ifndef SWAGGER_TYPES_LolClashRMSMessage_HPP
#define SWAGGER_TYPES_LolClashRMSMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashRMSMessage {
    // 
    int64_t timestamp;
    // 
    std::string payload;
  };

  inline void to_json(nlohmann::json& j, const LolClashRMSMessage& v) {
    j["timestamp"] = v.timestamp;
    j["payload"] = v.payload;
  }

  inline void from_json(const nlohmann::json& j, LolClashRMSMessage& v) {
    v.timestamp = j.at("timestamp").get<int64_t>;
    v.payload = j.at("payload").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolClashRMSMessage_HPP
