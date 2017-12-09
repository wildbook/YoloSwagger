#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLeague_t {
    std::string queueType;
    std::string leagueTier;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLeague_t& v) {
    j["queueType"] = v.queueType;
    j["leagueTier"] = v.leagueTier;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLeague_t& v) {
    v.queueType = j.at("queueType").get<std::string>();
    v.leagueTier = j.at("leagueTier").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLeague_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
