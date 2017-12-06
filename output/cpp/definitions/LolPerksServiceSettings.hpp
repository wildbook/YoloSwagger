#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksServiceSettings_t {
    bool serverSideStorageAvailable;
  };

  inline void to_json(nlohmann::json& j, const LolPerksServiceSettings_t& v) {
    j["serverSideStorageAvailable"] = v.serverSideStorageAvailable;
  }

  inline void from_json(const nlohmann::json& j, LolPerksServiceSettings_t& v) {
    v.serverSideStorageAvailable = j.at("serverSideStorageAvailable").get<bool>();
  }
}
