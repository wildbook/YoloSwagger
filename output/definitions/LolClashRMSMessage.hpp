#ifndef SWAGGER_TYPES_LolClashRMSMessage_HPP
#define SWAGGER_TYPES_LolClashRMSMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashRMSMessage {
    // 
    std::string payload;
    // 
    int64_t timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolClashRMSMessage& v) {
    j["payload"] = v.payload;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolClashRMSMessage& v) {
    v.payload = j.at("payload").get<std::string>;
    v.timestamp = j.at("timestamp").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashRMSMessage_HPP
