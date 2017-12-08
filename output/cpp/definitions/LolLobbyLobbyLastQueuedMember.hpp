#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyLastQueuedMember_t {
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyLastQueuedMember_t& v) {
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyLastQueuedMember_t& v) {
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const LolLobbyLobbyLastQueuedMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
