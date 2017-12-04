#ifndef SWAGGER_TYPES_PlayerInventory_HPP
#define SWAGGER_TYPES_PlayerInventory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PlayerInventory {
    // 
    std::vector<int32_t> skins;
    // 
    std::vector<int64_t> wardSkins;
    // 
    std::vector<int32_t> champions;
    // 
    std::vector<int32_t> icons;
  };

  inline void to_json(nlohmann::json& j, const PlayerInventory& v) {
    j["skins"] = v.skins;
    j["wardSkins"] = v.wardSkins;
    j["champions"] = v.champions;
    j["icons"] = v.icons;
  }

  inline void from_json(const nlohmann::json& j, PlayerInventory& v) {
    v.skins = j.at("skins").get<std::vector<int32_t>>;
    v.wardSkins = j.at("wardSkins").get<std::vector<int64_t>>;
    v.champions = j.at("champions").get<std::vector<int32_t>>;
    v.icons = j.at("icons").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_PlayerInventory_HPP
