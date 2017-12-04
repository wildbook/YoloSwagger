#ifndef SWAGGER_TYPES_LolChatAuthType_HPP
#define SWAGGER_TYPES_LolChatAuthType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChatAuthType {
    // 
    plain = 0,
    // 
    rsoRefresh = 2,
    // 
    rsoCreate = 1,
  };

  inline void to_json(nlohmann::json& j, const LolChatAuthType& v) {
    switch(v) {
      case LolChatAuthType::plain:
        j = "plain";
      break;
      case LolChatAuthType::rsoRefresh:
        j = "rsoRefresh";
      break;
      case LolChatAuthType::rsoCreate:
        j = "rsoCreate";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatAuthType& v) {
    const auto& s = j.get<std::string>();
    if(s == "plain"){
      v = LolChatAuthType::plain;
      return;
    }
    if(s == "rsoRefresh"){
      v = LolChatAuthType::rsoRefresh;
      return;
    }
    if(s == "rsoCreate"){
      v = LolChatAuthType::rsoCreate;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChatAuthType_HPP
