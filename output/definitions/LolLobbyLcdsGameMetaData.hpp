#ifndef SWAGGER_TYPES_LolLobbyLcdsGameMetaData_HPP
#define SWAGGER_TYPES_LolLobbyLcdsGameMetaData_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyLcdsGameMetaData {
    // 
    uint64_t gameId;
    // 
    int32_t mapId;
  };

  void to_json(nlohmann::json& j, const LolLobbyLcdsGameMetaData& v) {
    j["gameId"] = v.gameId;
    j["mapId"] = v.mapId;
  }

  void from_json(const nlohmann::json& j, LolLobbyLcdsGameMetaData& v) {
    v.gameId = j.at("gameId").get<uint64_t>;
    v.mapId = j.at("mapId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLcdsGameMetaData_HPP
