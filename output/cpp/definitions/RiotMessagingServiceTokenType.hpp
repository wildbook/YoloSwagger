#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class RiotMessagingServiceTokenType_t {
    Access_E = 1,
    Identity_E = 2,
    Unavailable_E = 0,
  };

  inline void to_json(nlohmann::json& j, const RiotMessagingServiceTokenType_t& v) {
    switch(v) {
      case RiotMessagingServiceTokenType_t::Access_E:
        j = "Access";
      break;
      case RiotMessagingServiceTokenType_t::Identity_E:
        j = "Identity";
      break;
      case RiotMessagingServiceTokenType_t::Unavailable_E:
        j = "Unavailable";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RiotMessagingServiceTokenType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Access"){
      v = RiotMessagingServiceTokenType_t::Access_E;
      return;
    }
    if(s == "Identity"){
      v = RiotMessagingServiceTokenType_t::Identity_E;
      return;
    }
    if(s == "Unavailable"){
      v = RiotMessagingServiceTokenType_t::Unavailable_E;
      return;
    }
  }
  inline std::string to_string(const RiotMessagingServiceTokenType_t& v) {
    switch(v) {
      case RiotMessagingServiceTokenType_t::Access_E:
        return "Access";
      case RiotMessagingServiceTokenType_t::Identity_E:
        return "Identity";
      case RiotMessagingServiceTokenType_t::Unavailable_E:
        return "Unavailable";
    }
  }

}
