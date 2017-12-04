#ifndef SWAGGER_TYPES_LolCollectionsCollectionsRental_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsRental_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolCollectionsCollectionsRental {
'    // 
    uint64_t endDate;
    // 
    uint64_t purchaseDate;
    // 
    bool rented;
    // 
    int32_t winCountRemaining;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsRental& v) {
    j["endDate"] = v.endDate;
    j["purchaseDate"] = v.purchaseDate;
    j["rented"] = v.rented;
    j["winCountRemaining"] = v.winCountRemaining;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsRental& v) {
    v.endDate = j.at("endDate").get<uint64_t>;
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>;
    v.rented = j.at("rented").get<bool>;
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsRental_HPP
