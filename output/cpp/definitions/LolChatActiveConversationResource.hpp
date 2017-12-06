#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatActiveConversationResource_t {
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolChatActiveConversationResource_t& v) {
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatActiveConversationResource_t& v) {
    v.id = j.at("id").get<std::string>();
  }
}
