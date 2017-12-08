#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatLobbyMember_t {
    bool isOwner;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChatLobbyMember_t& v) {
    j["isOwner"] = v.isOwner;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatLobbyMember_t& v) {
    v.isOwner = j.at("isOwner").get<bool>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const LolChatLobbyMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
