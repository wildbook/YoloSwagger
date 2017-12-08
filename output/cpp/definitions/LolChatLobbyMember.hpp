#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatLobbyMember_t {
    uint64_t id;
    bool isOwner;
  };

  inline void to_json(nlohmann::json& j, const LolChatLobbyMember_t& v) {
    j["id"] = v.id;
    j["isOwner"] = v.isOwner;
  }

  inline void from_json(const nlohmann::json& j, LolChatLobbyMember_t& v) {
    v.id = j.at("id").get<uint64_t>();
    v.isOwner = j.at("isOwner").get<bool>();
  }
  inline std::string to_string(const LolChatLobbyMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
