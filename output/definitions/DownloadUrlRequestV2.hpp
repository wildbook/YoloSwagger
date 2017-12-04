#ifndef SWAGGER_TYPES_DownloadUrlRequestV2_HPP
#define SWAGGER_TYPES_DownloadUrlRequestV2_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct DownloadUrlRequestV2 {
    // 
    uint64_t gameId;
    // 
    std::string platformId;
  };

  inline void to_json(nlohmann::json& j, const DownloadUrlRequestV2& v) {
    j["gameId"] = v.gameId;
    j["platformId"] = v.platformId;
  }

  inline void from_json(const nlohmann::json& j, DownloadUrlRequestV2& v) {
    v.gameId = j.at("gameId").get<uint64_t>;
    v.platformId = j.at("platformId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_DownloadUrlRequestV2_HPP
