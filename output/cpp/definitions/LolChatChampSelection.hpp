#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatChampSelection_t {
    int32_t selectedSkinIndex;
    std::string summonerInternalName;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolChatChampSelection_t& v) {
    j["selectedSkinIndex"] = v.selectedSkinIndex;
    j["summonerInternalName"] = v.summonerInternalName;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolChatChampSelection_t& v) {
    v.selectedSkinIndex = j.at("selectedSkinIndex").get<int32_t>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolChatChampSelection_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
