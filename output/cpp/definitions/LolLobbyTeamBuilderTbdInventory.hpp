#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTbdInventory_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTbdInventory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderTbdInventory {
    // 
    std::map<std::string, int32_t> lastSelectedSkinIdByChampionId;
    // 
    std::vector<int32_t> skinIds;
    // 
    std::vector<int32_t> disabledChampionIds;
    // 
    std::vector<int32_t> allChampionIds;
    // 
    std::vector<int32_t> spellIds;
    // 
    std::vector<int32_t> initialSpellIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbdInventory& v) {
    j["lastSelectedSkinIdByChampionId"] = v.lastSelectedSkinIdByChampionId;
    j["skinIds"] = v.skinIds;
    j["disabledChampionIds"] = v.disabledChampionIds;
    j["allChampionIds"] = v.allChampionIds;
    j["spellIds"] = v.spellIds;
    j["initialSpellIds"] = v.initialSpellIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbdInventory& v) {
    v.lastSelectedSkinIdByChampionId = j.at("lastSelectedSkinIdByChampionId").get<std::map<std::string, int32_t>>;
    v.skinIds = j.at("skinIds").get<std::vector<int32_t>>;
    v.disabledChampionIds = j.at("disabledChampionIds").get<std::vector<int32_t>>;
    v.allChampionIds = j.at("allChampionIds").get<std::vector<int32_t>>;
    v.spellIds = j.at("spellIds").get<std::vector<int32_t>>;
    v.initialSpellIds = j.at("initialSpellIds").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTbdInventory_HPP
