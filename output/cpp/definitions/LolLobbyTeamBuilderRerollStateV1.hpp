#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderRerollStateV1_t {
    bool allowRerolling;
    uint32_t rerollsRemaining;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderRerollStateV1_t& v) {
    j["allowRerolling"] = v.allowRerolling;
    j["rerollsRemaining"] = v.rerollsRemaining;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderRerollStateV1_t& v) {
    v.allowRerolling = j.at("allowRerolling").get<bool>();
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderRerollStateV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
