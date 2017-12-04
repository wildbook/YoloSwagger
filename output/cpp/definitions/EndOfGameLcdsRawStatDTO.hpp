#ifndef SWAGGER_TYPES_EndOfGameLcdsRawStatDTO_HPP
#define SWAGGER_TYPES_EndOfGameLcdsRawStatDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct EndOfGameLcdsRawStatDTO {
    // 
    int64_t value;
    // 
    std::string statTypeName;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsRawStatDTO& v) {
    j["value"] = v.value;
    j["statTypeName"] = v.statTypeName;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsRawStatDTO& v) {
    v.value = j.at("value").get<int64_t>;
    v.statTypeName = j.at("statTypeName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameLcdsRawStatDTO_HPP
