#ifndef SWAGGER_TYPES_RecofrienderContactPaginationResource_HPP
#define SWAGGER_TYPES_RecofrienderContactPaginationResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RecofrienderContactPaginationResource {
    // 
    uint64_t count;
    // 
    uint64_t cached;
    // 
    uint64_t start;
    // 
    uint64_t limit;
    // 
    uint64_t total;
    // 
    bool more;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactPaginationResource& v) {
    j["count"] = v.count;
    j["cached"] = v.cached;
    j["start"] = v.start;
    j["limit"] = v.limit;
    j["total"] = v.total;
    j["more"] = v.more;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactPaginationResource& v) {
    v.count = j.at("count").get<uint64_t>;
    v.cached = j.at("cached").get<uint64_t>;
    v.start = j.at("start").get<uint64_t>;
    v.limit = j.at("limit").get<uint64_t>;
    v.total = j.at("total").get<uint64_t>;
    v.more = j.at("more").get<bool>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderContactPaginationResource_HPP
