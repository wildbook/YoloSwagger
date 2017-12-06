#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatChampSelection_t {
    int32_t championId;
    std::string summonerInternalName;
    int32_t selectedSkinIndex;
  };

  inline void to_json(nlohmann::json& j, const LolChatChampSelection_t& v) {
    j["championId"] = v.championId;
    j["summonerInternalName"] = v.summonerInternalName;
    j["selectedSkinIndex"] = v.selectedSkinIndex;
  }

  inline void from_json(const nlohmann::json& j, LolChatChampSelection_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.selectedSkinIndex = j.at("selectedSkinIndex").get<int32_t>();
  }
}
