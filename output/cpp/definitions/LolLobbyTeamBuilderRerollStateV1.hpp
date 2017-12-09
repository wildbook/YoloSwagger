#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderRerollStateV1_t {
    uint32_t rerollsRemaining;
    bool allowRerolling;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderRerollStateV1_t& v) {
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["allowRerolling"] = v.allowRerolling;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderRerollStateV1_t& v) {
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
    v.allowRerolling = j.at("allowRerolling").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderRerollStateV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
