#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderCeremonyV1_t {
    int64_t duration;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderCeremonyV1_t& v) {
    j["duration"] = v.duration;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderCeremonyV1_t& v) {
    v.duration = j.at("duration").get<int64_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderCeremonyV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
