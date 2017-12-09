#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatChampSelection_t {
    std::string summonerInternalName;
    int32_t selectedSkinIndex;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolChatChampSelection_t& v) {
    j["summonerInternalName"] = v.summonerInternalName;
    j["selectedSkinIndex"] = v.selectedSkinIndex;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolChatChampSelection_t& v) {
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.selectedSkinIndex = j.at("selectedSkinIndex").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolChatChampSelection_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
