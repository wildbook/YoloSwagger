#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatChampSelection_t {
    int32_t championId;
    int32_t selectedSkinIndex;
    std::string summonerInternalName;
  };

  inline void to_json(nlohmann::json& j, const LolChatChampSelection_t& v) {
    j["championId"] = v.championId;
    j["selectedSkinIndex"] = v.selectedSkinIndex;
    j["summonerInternalName"] = v.summonerInternalName;
  }

  inline void from_json(const nlohmann::json& j, LolChatChampSelection_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.selectedSkinIndex = j.at("selectedSkinIndex").get<int32_t>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
  }
}
