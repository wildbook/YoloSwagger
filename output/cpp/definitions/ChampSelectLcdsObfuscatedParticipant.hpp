#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsObfuscatedParticipant_t {
    uint64_t gameUniqueId;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsObfuscatedParticipant_t& v) {
    j["gameUniqueId"] = v.gameUniqueId;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsObfuscatedParticipant_t& v) {
    v.gameUniqueId = j.at("gameUniqueId").get<uint64_t>();
  }
}
