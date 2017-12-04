#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectMySelection_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectMySelection_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyTeamBuilderChampSelectMySelection {
'    // 
    int32_t selectedSkinId;
    // 
    uint64_t spell1Id;
    // 
    uint64_t spell2Id;
    // 
    int64_t wardSkinId;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectMySelection& v) {
    j["selectedSkinId"] = v.selectedSkinId;
    j["spell1Id"] = v.spell1Id;
    j["spell2Id"] = v.spell2Id;
    j["wardSkinId"] = v.wardSkinId;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectMySelection& v) {
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t>;
    v.spell1Id = j.at("spell1Id").get<uint64_t>;
    v.spell2Id = j.at("spell2Id").get<uint64_t>;
    v.wardSkinId = j.at("wardSkinId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectMySelection_HPP
