#ifndef SWAGGER_TYPES_LolChatActiveConversationResource_HPP
#define SWAGGER_TYPES_LolChatActiveConversationResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatActiveConversationResource {
    // 
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolChatActiveConversationResource& v) {
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatActiveConversationResource& v) {
    v.id = j.at("id").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatActiveConversationResource_HPP
