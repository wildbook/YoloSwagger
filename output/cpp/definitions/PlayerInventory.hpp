#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerInventory_t {
    std::vector<int64_t> wardSkins;
    std::vector<int32_t> icons;
    std::vector<int32_t> skins;
    std::vector<int32_t> champions;
  };

  inline void to_json(nlohmann::json& j, const PlayerInventory_t& v) {
    j["wardSkins"] = v.wardSkins;
    j["icons"] = v.icons;
    j["skins"] = v.skins;
    j["champions"] = v.champions;
  }

  inline void from_json(const nlohmann::json& j, PlayerInventory_t& v) {
    v.wardSkins = j.at("wardSkins").get<std::vector<int64_t>>();
    v.icons = j.at("icons").get<std::vector<int32_t>>();
    v.skins = j.at("skins").get<std::vector<int32_t>>();
    v.champions = j.at("champions").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const PlayerInventory_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
