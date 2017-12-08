#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPlayerInventory_t {
    uint32_t ownedPageCount;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPlayerInventory_t& v) {
    j["ownedPageCount"] = v.ownedPageCount;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPlayerInventory_t& v) {
    v.ownedPageCount = j.at("ownedPageCount").get<uint32_t>();
  }
  inline std::string to_string(const LolPerksPlayerInventory_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
