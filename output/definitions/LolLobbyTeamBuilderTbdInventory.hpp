#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTbdInventory_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTbdInventory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderTbdInventory {
    // 
    std::vector<int32_t> allChampionIds;
    // 
    std::vector<int32_t> disabledChampionIds;
    // 
    std::vector<int32_t> initialSpellIds;
    // 
    std::map<std::string, int32_t> lastSelectedSkinIdByChampionId;
    // 
    std::vector<int32_t> skinIds;
    // 
    std::vector<int32_t> spellIds;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbdInventory& v) {
    j["allChampionIds"] = v.allChampionIds;
    j["disabledChampionIds"] = v.disabledChampionIds;
    j["initialSpellIds"] = v.initialSpellIds;
    j["lastSelectedSkinIdByChampionId"] = v.lastSelectedSkinIdByChampionId;
    j["skinIds"] = v.skinIds;
    j["spellIds"] = v.spellIds;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbdInventory& v) {
    v.allChampionIds = j.at("allChampionIds").get<std::vector<int32_t>>;
    v.disabledChampionIds = j.at("disabledChampionIds").get<std::vector<int32_t>>;
    v.initialSpellIds = j.at("initialSpellIds").get<std::vector<int32_t>>;
    v.lastSelectedSkinIdByChampionId = j.at("lastSelectedSkinIdByChampionId").get<std::map<std::string, int32_t>>;
    v.skinIds = j.at("skinIds").get<std::vector<int32_t>>;
    v.spellIds = j.at("spellIds").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTbdInventory_HPP
