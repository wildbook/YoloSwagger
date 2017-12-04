#ifndef SWAGGER_TYPES_LolChampSelectLegacyCollectionsRental_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyCollectionsRental_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectLegacyCollectionsRental {
    // 
    bool rented;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyCollectionsRental& v) {
    j["rented"] = v.rented;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyCollectionsRental& v) {
    v.rented = j.at("rented").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyCollectionsRental_HPP
