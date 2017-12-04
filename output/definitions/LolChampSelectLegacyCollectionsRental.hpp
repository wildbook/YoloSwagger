#ifndef SWAGGER_TYPES_LolChampSelectLegacyCollectionsRental_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyCollectionsRental_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChampSelectLegacyCollectionsRental {
'    // 
    bool rented;
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyCollectionsRental& v) {
    j["rented"] = v.rented;
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyCollectionsRental& v) {
    v.rented = j.at("rented").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyCollectionsRental_HPP
