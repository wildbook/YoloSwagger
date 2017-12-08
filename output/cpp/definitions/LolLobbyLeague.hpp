#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLeague_t {
    std::string_t leagueTier;
    std::string_t queueType;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLeague_t& v) {
    j["leagueTier"] = v.leagueTier;
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLeague_t& v) {
    v.leagueTier = j.at("leagueTier").get<std::string_t>();
    v.queueType = j.at("queueType").get<std::string_t>();
  }
  inline std::string to_string(const LolLobbyLeague_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
