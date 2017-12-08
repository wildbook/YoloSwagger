#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectDisabledChampions_t {
    std::vector<int32_t> championIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectDisabledChampions_t& v) {
    j["championIds"] = v.championIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectDisabledChampions_t& v) {
    v.championIds = j.at("championIds").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampSelectDisabledChampions_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
