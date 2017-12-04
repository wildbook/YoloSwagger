#ifndef SWAGGER_TYPES_LolChampionsCollectionsRental_HPP
#define SWAGGER_TYPES_LolChampionsCollectionsRental_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampionsCollectionsRental {
    // 
    uint64_t endDate;
    // 
    uint64_t purchaseDate;
    // 
    bool rented;
    // 
    int32_t winCountRemaining;
  };

  void to_json(nlohmann::json& j, const LolChampionsCollectionsRental& v) {
    j["endDate"] = v.endDate;
    j["purchaseDate"] = v.purchaseDate;
    j["rented"] = v.rented;
    j["winCountRemaining"] = v.winCountRemaining;
  }

  void from_json(const nlohmann::json& j, LolChampionsCollectionsRental& v) {
    v.endDate = j.at("endDate").get<uint64_t>;
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>;
    v.rented = j.at("rented").get<bool>;
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsCollectionsRental_HPP
