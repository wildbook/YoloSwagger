#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectPickableSkins_t {
    std::vector<int32_t> skinIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectPickableSkins_t& v) {
    j["skinIds"] = v.skinIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectPickableSkins_t& v) {
    v.skinIds = j.at("skinIds").get<std::vector<int32_t>>();
  }
}
