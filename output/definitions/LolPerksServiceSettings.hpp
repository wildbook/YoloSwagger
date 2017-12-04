#ifndef SWAGGER_TYPES_LolPerksServiceSettings_HPP
#define SWAGGER_TYPES_LolPerksServiceSettings_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksServiceSettings {
    // 
    bool serverSideStorageAvailable;
  };

  inline void to_json(nlohmann::json& j, const LolPerksServiceSettings& v) {
    j["serverSideStorageAvailable"] = v.serverSideStorageAvailable;
  }

  inline void from_json(const nlohmann::json& j, LolPerksServiceSettings& v) {
    v.serverSideStorageAvailable = j.at("serverSideStorageAvailable").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolPerksServiceSettings_HPP
