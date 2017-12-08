#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderCeremonyV1_t {
    std::string name;
    int64_t duration;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderCeremonyV1_t& v) {
    j["name"] = v.name;
    j["duration"] = v.duration;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderCeremonyV1_t& v) {
    v.name = j.at("name").get<std::string>();
    v.duration = j.at("duration").get<int64_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderCeremonyV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
