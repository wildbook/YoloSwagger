#ifndef SWAGGER_TYPES_LolCollectionsCollectionsRuneQuantity_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsRuneQuantity_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsRuneQuantity {
    // 
    uint32_t runeId;
    // 
    int32_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRuneQuantity& v) {
    j["runeId"] = v.runeId;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRuneQuantity& v) {
    v.runeId = j.at("runeId").get<uint32_t>;
    v.quantity = j.at("quantity").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsRuneQuantity_HPP
