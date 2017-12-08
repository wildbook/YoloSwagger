#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatActiveConversationResource_t {
    std::string_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChatActiveConversationResource_t& v) {
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatActiveConversationResource_t& v) {
    v.id = j.at("id").get<std::string_t>();
  }
  inline std::string to_string(const LolChatActiveConversationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
