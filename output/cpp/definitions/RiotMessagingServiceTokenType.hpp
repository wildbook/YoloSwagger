#ifndef SWAGGER_TYPES_RiotMessagingServiceTokenType_HPP
#define SWAGGER_TYPES_RiotMessagingServiceTokenType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class RiotMessagingServiceTokenType {
    // 
    Access = 1,
    // 
    Unavailable = 0,
    // 
    Identity = 2,
  };

  inline void to_json(nlohmann::json& j, const RiotMessagingServiceTokenType& v) {
    switch(v) {
      case RiotMessagingServiceTokenType::Access:
        j = "Access";
      break;
      case RiotMessagingServiceTokenType::Unavailable:
        j = "Unavailable";
      break;
      case RiotMessagingServiceTokenType::Identity:
        j = "Identity";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RiotMessagingServiceTokenType& v) {
    const auto& s = j.get<std::string>();
    if(s == "Access"){
      v = RiotMessagingServiceTokenType::Access;
      return;
    }
    if(s == "Unavailable"){
      v = RiotMessagingServiceTokenType::Unavailable;
      return;
    }
    if(s == "Identity"){
      v = RiotMessagingServiceTokenType::Identity;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_RiotMessagingServiceTokenType_HPP
