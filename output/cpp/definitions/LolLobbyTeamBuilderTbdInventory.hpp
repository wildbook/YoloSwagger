#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTbdInventory_t {
    std::vector<int32_t> allChampionIds;
    std::vector<int32_t> disabledChampionIds;
    std::vector<int32_t> initialSpellIds;
    std::map<std::string, int32_t> lastSelectedSkinIdByChampionId;
    std::vector<int32_t> spellIds;
    std::vector<int32_t> skinIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbdInventory_t& v) {
    j["allChampionIds"] = v.allChampionIds;
    j["disabledChampionIds"] = v.disabledChampionIds;
    j["initialSpellIds"] = v.initialSpellIds;
    j["lastSelectedSkinIdByChampionId"] = v.lastSelectedSkinIdByChampionId;
    j["spellIds"] = v.spellIds;
    j["skinIds"] = v.skinIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbdInventory_t& v) {
    v.allChampionIds = j.at("allChampionIds").get<std::vector<int32_t>>();
    v.disabledChampionIds = j.at("disabledChampionIds").get<std::vector<int32_t>>();
    v.initialSpellIds = j.at("initialSpellIds").get<std::vector<int32_t>>();
    v.lastSelectedSkinIdByChampionId = j.at("lastSelectedSkinIdByChampionId").get<std::map<std::string, int32_t>>();
    v.spellIds = j.at("spellIds").get<std::vector<int32_t>>();
    v.skinIds = j.at("skinIds").get<std::vector<int32_t>>();
  }
}
