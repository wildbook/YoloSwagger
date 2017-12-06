#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectPickableChampions_t {
    std::vector<int32_t> championIds;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectPickableChampions_t& v) {
    j["championIds"] = v.championIds;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectPickableChampions_t& v) {
    v.championIds = j.at("championIds").get<std::vector<int32_t>>();
  }
}
